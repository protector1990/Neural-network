<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-BB9C-8E3AE7F7C268}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-BB9C-8E3AE7F7C268}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-BB9C-8E3AE7F7C268}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Idl Files">
      <UniqueIdentifier>{2990FA4C-FECA-1BAD-BB9C-8E3AE7F7C268}</UniqueIdentifier>
      <Extensions>idl</Extensions>
    </Filter>
    <Filter Include="Inline Files">
      <UniqueIdentifier>{763028EF-FECA-1BAD-BB9C-8E3AE7F7C268}</UniqueIdentifier>
      <Extensions>i;ipp;inl</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
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
    <ClInclude Include="rtcorba_common_export.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="test_i.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="testC.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="testS.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="Common.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="test.idl">
      <Filter>Idl Files</Filter>
    </CustomBuild>
  </ItemGroup>
  <ItemGroup>
    <None Include="test_i.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="testC.inl">
      <Filter>Inline Files</Filter>
    </None>
  </ItemGroup>
</Project>
