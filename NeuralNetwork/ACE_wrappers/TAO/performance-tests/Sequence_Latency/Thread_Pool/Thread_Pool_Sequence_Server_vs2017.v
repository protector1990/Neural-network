<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-3B6A-BD791BFC1CCA}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-3B6A-BD791BFC1CCA}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-3B6A-BD791BFC1CCA}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-3B6A-BD791BFC1CCA}</UniqueIdentifier>
    </Filter>
    <Filter Include="Svc Conf Files">
      <UniqueIdentifier>{84D0937A-FECA-1BAD-3B6A-BD791BFC1CCA}</UniqueIdentifier>
      <Extensions>conf;confxml</Extensions>
    </Filter>
    <Filter Include="Documentation">
      <UniqueIdentifier>{B14BBA74-FECA-1BAD-3B6A-BD791BFC1CCA}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="Roundtrip.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="server.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="TestC.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="TestS.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Worker_Thread.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="Roundtrip.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Worker_Thread.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="Thread_Pool.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="svc.conf">
      <Filter>Svc Conf Files</Filter>
    </None>
    <None Include="svc.conf.xml">
      <Filter>Svc Conf Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="README">
      <Filter>Documentation</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>
