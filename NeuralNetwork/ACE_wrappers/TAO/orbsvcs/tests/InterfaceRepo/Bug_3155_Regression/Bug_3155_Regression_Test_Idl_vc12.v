<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-10ED-4E610E2AC61C}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-10ED-4E610E2AC61C}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-10ED-4E610E2AC61C}</UniqueIdentifier>
    </Filter>
    <Filter Include="Documentation">
      <UniqueIdentifier>{B14BBA74-FECA-1BAD-10ED-4E610E2AC61C}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="test_idl.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <None Include="Bug_3155_Regression.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="ReadMe.txt">
      <Filter>Documentation</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>