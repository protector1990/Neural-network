<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="14.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-51B8-20AE8EABFC38}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-51B8-20AE8EABFC38}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-51B8-20AE8EABFC38}</UniqueIdentifier>
    </Filter>
    <Filter Include="Svc Conf Files">
      <UniqueIdentifier>{84D0937A-FECA-1BAD-51B8-20AE8EABFC38}</UniqueIdentifier>
      <Extensions>conf;confxml</Extensions>
    </Filter>
    <Filter Include="Documentation">
      <UniqueIdentifier>{B14BBA74-FECA-1BAD-51B8-20AE8EABFC38}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="server.cpp">
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
    <None Include="RTCORBA_Policy_Combinations.mpc">
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
