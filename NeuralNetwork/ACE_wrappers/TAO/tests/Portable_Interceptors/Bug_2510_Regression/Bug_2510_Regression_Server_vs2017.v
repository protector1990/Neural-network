<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-40ED-4F251336DE38}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-40ED-4F251336DE38}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-40ED-4F251336DE38}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-40ED-4F251336DE38}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="server.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="server_interceptor.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Server_ORBInitializer.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="test_i.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="testC.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="testS.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="server_interceptor.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Server_ORBInitializer.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="test_i.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="Bug_2510_Regression.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
</Project>
