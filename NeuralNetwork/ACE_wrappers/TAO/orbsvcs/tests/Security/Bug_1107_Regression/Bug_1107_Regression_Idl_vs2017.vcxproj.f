<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-30ED-4C649A27520B}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Idl Files">
      <UniqueIdentifier>{2990FA4C-FECA-1BAD-30ED-4C649A27520B}</UniqueIdentifier>
      <Extensions>idl</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <None Include="Bug_1107_Regression.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="Foo.idl">
      <Filter>Idl Files</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>