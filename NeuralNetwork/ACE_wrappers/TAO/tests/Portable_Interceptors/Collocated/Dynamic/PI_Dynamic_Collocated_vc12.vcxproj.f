<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-7EBD-399B640A1471}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-7EBD-399B640A1471}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-7EBD-399B640A1471}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-7EBD-399B640A1471}</UniqueIdentifier>
    </Filter>
    <Filter Include="Idl Files">
      <UniqueIdentifier>{2990FA4C-FECA-1BAD-7EBD-399B640A1471}</UniqueIdentifier>
      <Extensions>idl</Extensions>
    </Filter>
    <Filter Include="Inline Files">
      <UniqueIdentifier>{763028EF-FECA-1BAD-7EBD-399B640A1471}</UniqueIdentifier>
      <Extensions>i;ipp;inl</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="Client_Task.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Collocated_Test.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Echo_Collocated_ORBInitializer.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="interceptors.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Server_Task.cpp">
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
    <ClInclude Include="Client_Task.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Echo_Collocated_ORBInitializer.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="interceptors.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Server_Task.h">
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
    <None Include="PI_Dynamic.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="test.idl">
      <Filter>Idl Files</Filter>
    </CustomBuild>
  </ItemGroup>
  <ItemGroup>
    <None Include="testC.inl">
      <Filter>Inline Files</Filter>
    </None>
  </ItemGroup>
</Project>
