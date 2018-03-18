/*==============================================================*/
/* DBMS name:      PostgreSQL 9.x                               */
/* Created on:     3/19/2018 12:15:09 AM                        */
/*==============================================================*/


drop index ACCURACY_REACHED_FRAGMENT_PK;

drop table ACCURACY_REACHED_FRAGMENT;

drop index JOB_PK;

drop table JOB;

drop index JOB_HAS_JOB_EXECUTION_FK;

drop index JOB_EXECUTION_PK;

drop table JOB_EXECUTION;

drop index JOB_HAS_JOB_FRAGMENTS_FK;

drop index JOB_FRAGMENT_PK;

drop table JOB_FRAGMENT;

drop index JOB_FRAGMENT_EXECUTION_RUNS_ON_;

drop index JOB_EXECUTION_HAS_JOB_FRAGMENT_;

drop index JOB_FRAGMENT_EXECUTION_PK;

drop table JOB_FRAGMENT_EXECUTION;

drop index JOB_FRAGMENT_EXECUTOR_PK;

drop table JOB_FRAGMENT_EXECUTOR;

drop index NUM_OF_ITERATIONS_FRAGMENT_PK;

drop table NUM_OF_ITERATIONS_FRAGMENT;

drop domain DOM_EXECUTOR_STATUS;

drop domain DOM_IDENTITY;

drop domain DOM_IP;

drop domain DOM_PATH;

drop domain DOM_STATUS;

drop domain DOM_TIME;

/*==============================================================*/
/* Domain: DOM_EXECUTOR_STATUS                                  */
/*==============================================================*/
create domain DOM_EXECUTOR_STATUS as TEXT;

/*==============================================================*/
/* Domain: DOM_IDENTITY                                         */
/*==============================================================*/
create domain DOM_IDENTITY as INT8;

/*==============================================================*/
/* Domain: DOM_IP                                               */
/*==============================================================*/
create domain DOM_IP as CHAR(10);

/*==============================================================*/
/* Domain: DOM_PATH                                             */
/*==============================================================*/
create domain DOM_PATH as TEXT;

/*==============================================================*/
/* Domain: DOM_STATUS                                           */
/*==============================================================*/
create domain DOM_STATUS as TEXT;

/*==============================================================*/
/* Domain: DOM_TIME                                             */
/*==============================================================*/
create domain DOM_TIME as DATE;

/*==============================================================*/
/* Table: JOB                                                   */
/*==============================================================*/
create table JOB (
   ID_JOB               DOM_IDENTITY         not null,
   constraint PK_JOB primary key (ID_JOB)
);

/*==============================================================*/
/* Table: JOB_FRAGMENT                                          */
/*==============================================================*/
create table JOB_FRAGMENT (
   ID_JOB_FRAGMENT      DOM_IDENTITY         not null,
   ID_JOB               DOM_IDENTITY         not null,
   DATA_SET             DOM_PATH             not null,
   constraint PK_JOB_FRAGMENT primary key (ID_JOB_FRAGMENT),
   constraint FK_JOB_FRAG_JOB_HAS_J_JOB foreign key (ID_JOB)
      references JOB (ID_JOB)
      on delete restrict on update restrict
);

/*==============================================================*/
/* Table: ACCURACY_REACHED_FRAGMENT                             */
/*==============================================================*/
create table ACCURACY_REACHED_FRAGMENT (
   ID_JOB_FRAGMENT      DOM_IDENTITY         not null,
   ID_JOB               DOM_IDENTITY         null,
   DATA_SET             DOM_PATH             not null,
   TARGET_ACCURACY      FLOAT8               null,
   constraint PK_ACCURACY_REACHED_FRAGMENT primary key (ID_JOB_FRAGMENT),
   constraint FK_ACCURACY_IS_TYPE_O_JOB_FRAG foreign key (ID_JOB_FRAGMENT)
      references JOB_FRAGMENT (ID_JOB_FRAGMENT)
      on delete restrict on update restrict
);

/*==============================================================*/
/* Index: ACCURACY_REACHED_FRAGMENT_PK                          */
/*==============================================================*/
create unique index ACCURACY_REACHED_FRAGMENT_PK on ACCURACY_REACHED_FRAGMENT (
ID_JOB_FRAGMENT
);

/*==============================================================*/
/* Index: JOB_PK                                                */
/*==============================================================*/
create unique index JOB_PK on JOB (
ID_JOB
);

/*==============================================================*/
/* Table: JOB_EXECUTION                                         */
/*==============================================================*/
create table JOB_EXECUTION (
   ID_JOB_EXECUTION     DOM_IDENTITY         not null,
   ID_JOB               DOM_IDENTITY         not null,
   STATUS_JOB_EXECUTION DOM_STATUS           not null,
   STARTED_JOB_EXECUTION DOM_TIME             not null,
   FINISHED_JOB_EXECUTION DOM_TIME             null,
   constraint PK_JOB_EXECUTION primary key (ID_JOB_EXECUTION),
   constraint FK_JOB_EXEC_JOB_HAS_J_JOB foreign key (ID_JOB)
      references JOB (ID_JOB)
      on delete restrict on update restrict
);

/*==============================================================*/
/* Index: JOB_EXECUTION_PK                                      */
/*==============================================================*/
create unique index JOB_EXECUTION_PK on JOB_EXECUTION (
ID_JOB_EXECUTION
);

/*==============================================================*/
/* Index: JOB_HAS_JOB_EXECUTION_FK                              */
/*==============================================================*/
create  index JOB_HAS_JOB_EXECUTION_FK on JOB_EXECUTION (
ID_JOB
);

/*==============================================================*/
/* Index: JOB_FRAGMENT_PK                                       */
/*==============================================================*/
create unique index JOB_FRAGMENT_PK on JOB_FRAGMENT (
ID_JOB_FRAGMENT
);

/*==============================================================*/
/* Index: JOB_HAS_JOB_FRAGMENTS_FK                              */
/*==============================================================*/
create  index JOB_HAS_JOB_FRAGMENTS_FK on JOB_FRAGMENT (
ID_JOB
);

/*==============================================================*/
/* Table: JOB_FRAGMENT_EXECUTOR                                 */
/*==============================================================*/
create table JOB_FRAGMENT_EXECUTOR (
   ID_JOB_FRAGMENT_EXECUTOR DOM_IDENTITY         not null,
   STATUS_JOB_EXECUTOR  DOM_EXECUTOR_STATUS  not null,
   NUMBER_OF_THREADS    INT4                 null,
   AMOUNT_OF_MEMORY     INT4                 null,
   CPU_CLOCK            VARCHAR(10)          null,
   AVAILABLE_HARD_DISK  INT4                 null,
   IP_ADDRESS           DOM_IP               null,
   constraint PK_JOB_FRAGMENT_EXECUTOR primary key (ID_JOB_FRAGMENT_EXECUTOR)
);

/*==============================================================*/
/* Table: JOB_FRAGMENT_EXECUTION                                */
/*==============================================================*/
create table JOB_FRAGMENT_EXECUTION (
   ID_JOB_FRAGMENT_EXECUTION DOM_IDENTITY         not null,
   ID_JOB_EXECUTION     DOM_IDENTITY         not null,
   ID_JOB_FRAGMENT      DOM_IDENTITY         not null,
   ID_JOB_FRAGMENT_EXECUTOR DOM_IDENTITY         not null,
   STATUS_FRAGMENT_EXECUTION DOM_STATUS           not null,
   constraint PK_JOB_FRAGMENT_EXECUTION primary key (ID_JOB_FRAGMENT_EXECUTION),
   constraint FK_JOB_FRAG_JOB_EXECU_JOB_EXEC foreign key (ID_JOB_EXECUTION)
      references JOB_EXECUTION (ID_JOB_EXECUTION)
      on delete restrict on update restrict,
   constraint FK_JOB_FRAG_JOB_FRAGM_JOB_FRAG2 foreign key (ID_JOB_FRAGMENT)
      references JOB_FRAGMENT (ID_JOB_FRAGMENT)
      on delete restrict on update restrict,
   constraint FK_JOB_FRAG_JOB_FRAGM_JOB_FRAG foreign key (ID_JOB_FRAGMENT_EXECUTOR)
      references JOB_FRAGMENT_EXECUTOR (ID_JOB_FRAGMENT_EXECUTOR)
      on delete restrict on update restrict
);

/*==============================================================*/
/* Index: JOB_FRAGMENT_EXECUTION_PK                             */
/*==============================================================*/
create unique index JOB_FRAGMENT_EXECUTION_PK on JOB_FRAGMENT_EXECUTION (
ID_JOB_FRAGMENT_EXECUTION
);

/*==============================================================*/
/* Index: JOB_EXECUTION_HAS_JOB_FRAGMENT_                       */
/*==============================================================*/
create  index JOB_EXECUTION_HAS_JOB_FRAGMENT_ on JOB_FRAGMENT_EXECUTION using BTREE (
ID_JOB_EXECUTION
);

/*==============================================================*/
/* Index: JOB_FRAGMENT_EXECUTION_RUNS_ON_                       */
/*==============================================================*/
create  index JOB_FRAGMENT_EXECUTION_RUNS_ON_ on JOB_FRAGMENT_EXECUTION (
ID_JOB_FRAGMENT_EXECUTOR
);

/*==============================================================*/
/* Index: JOB_FRAGMENT_EXECUTOR_PK                              */
/*==============================================================*/
create unique index JOB_FRAGMENT_EXECUTOR_PK on JOB_FRAGMENT_EXECUTOR (
ID_JOB_FRAGMENT_EXECUTOR
);

/*==============================================================*/
/* Table: NUM_OF_ITERATIONS_FRAGMENT                            */
/*==============================================================*/
create table NUM_OF_ITERATIONS_FRAGMENT (
   ID_JOB_FRAGMENT      DOM_IDENTITY         not null,
   ID_JOB               DOM_IDENTITY         null,
   DATA_SET             DOM_PATH             not null,
   NUM_OF_ITERATIONS    CHAR(10)             null,
   constraint PK_NUM_OF_ITERATIONS_FRAGMENT primary key (ID_JOB_FRAGMENT),
   constraint FK_NUM_OF_I_IS_TYPE_O_JOB_FRAG foreign key (ID_JOB_FRAGMENT)
      references JOB_FRAGMENT (ID_JOB_FRAGMENT)
      on delete restrict on update restrict
);

/*==============================================================*/
/* Index: NUM_OF_ITERATIONS_FRAGMENT_PK                         */
/*==============================================================*/
create unique index NUM_OF_ITERATIONS_FRAGMENT_PK on NUM_OF_ITERATIONS_FRAGMENT (
ID_JOB_FRAGMENT
);

