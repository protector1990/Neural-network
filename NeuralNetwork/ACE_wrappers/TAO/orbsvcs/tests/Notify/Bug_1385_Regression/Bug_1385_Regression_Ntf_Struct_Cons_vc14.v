<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="14.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-10ED-4C4C4F26FAA6}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-10ED-4C4C4F26FAA6}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-10ED-4C4C4F26FAA6}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-10ED-4C4C4F26FAA6}</UniqueIdentifier>
    </Filter>
    <Filter Include="Svc Conf Files">
      <UniqueIdentifier>{84D0937A-FECA-1BAD-10ED-4C4C4F26FAA6}</UniqueIdentifier>
      <Extensions>conf;confxml</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="goC.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Notify_Structured_Push_Consumer.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Structured_Consumer.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="Notify_Structured_Push_Consumer.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="Bug_1385_Regression.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="notify.conf">
      <Filter>Svc Conf Files</Filter>
    </None>
    <None Include="notify.conf.xml">
      <Filter>Svc Conf Files</Filter>
    </None>
  </ItemGroup>
</Project>
