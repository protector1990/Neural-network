<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="14.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-A130-A4FA0E586E8A}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Idl Files">
      <UniqueIdentifier>{2990FA4C-FECA-1BAD-A130-A4FA0E586E8A}</UniqueIdentifier>
      <Extensions>idl</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <None Include="Retry_On_Reply_Failure.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="test.idl">
      <Filter>Idl Files</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>
