<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-C4DE-CF65A053E72E}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-C4DE-CF65A053E72E}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-C4DE-CF65A053E72E}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-C4DE-CF65A053E72E}</UniqueIdentifier>
    </Filter>
    <Filter Include="Inline Files">
      <UniqueIdentifier>{763028EF-FECA-1BAD-C4DE-CF65A053E72E}</UniqueIdentifier>
      <Extensions>i;ipp;inl</Extensions>
    </Filter>
    <Filter Include="Documentation">
      <UniqueIdentifier>{B14BBA74-FECA-1BAD-C4DE-CF65A053E72E}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="receiver.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Receiver_Stats.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="receiver.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Receiver_Stats.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="AVS_Simple_Two_Stage.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="Receiver_Stats.inl">
      <Filter>Inline Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="README">
      <Filter>Documentation</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>