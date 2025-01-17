<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-1CF5-22FD632D8E99}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-1CF5-22FD632D8E99}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-1CF5-22FD632D8E99}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-1CF5-22FD632D8E99}</UniqueIdentifier>
    </Filter>
    <Filter Include="Idl Files">
      <UniqueIdentifier>{2990FA4C-FECA-1BAD-1CF5-22FD632D8E99}</UniqueIdentifier>
      <Extensions>idl</Extensions>
    </Filter>
    <Filter Include="Inline Files">
      <UniqueIdentifier>{763028EF-FECA-1BAD-1CF5-22FD632D8E99}</UniqueIdentifier>
      <Extensions>i;ipp;inl</Extensions>
    </Filter>
    <Filter Include="Documentation">
      <UniqueIdentifier>{B14BBA74-FECA-1BAD-1CF5-22FD632D8E99}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="..\FP_SchedulingC.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="FP_DT_Creator.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="FP_Scheduler.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="FP_Task.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="test.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="..\FP_SchedulingC.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="FP_DT_Creator.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="fp_dt_creator_export.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="FP_Scheduler.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="FP_Task.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="test.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="Fixed_Priority_Scheduler.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="..\FP_Scheduling.idl">
      <Filter>Idl Files</Filter>
    </CustomBuild>
  </ItemGroup>
  <ItemGroup>
    <None Include="..\FP_SchedulingC.inl">
      <Filter>Inline Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="README">
      <Filter>Documentation</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>
