<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-2BD8-A079D10D3EA5}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-2BD8-A079D10D3EA5}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-2BD8-A079D10D3EA5}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-2BD8-A079D10D3EA5}</UniqueIdentifier>
    </Filter>
    <Filter Include="Idl Files">
      <UniqueIdentifier>{2990FA4C-FECA-1BAD-2BD8-A079D10D3EA5}</UniqueIdentifier>
      <Extensions>idl</Extensions>
    </Filter>
    <Filter Include="Inline Files">
      <UniqueIdentifier>{763028EF-FECA-1BAD-2BD8-A079D10D3EA5}</UniqueIdentifier>
      <Extensions>i;ipp;inl</Extensions>
    </Filter>
    <Filter Include="Documentation">
      <UniqueIdentifier>{B14BBA74-FECA-1BAD-2BD8-A079D10D3EA5}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="Messenger_i.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="MessengerC.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="MessengerS.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="MessengerTask.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="NamingMessenger.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="NamingTask.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="Messenger_i.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="MessengerC.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="MessengerS.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="MessengerTask.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="NamingTask.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="Naming_Server.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="Messenger.idl">
      <Filter>Idl Files</Filter>
    </CustomBuild>
  </ItemGroup>
  <ItemGroup>
    <None Include="MessengerC.inl">
      <Filter>Inline Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="README">
      <Filter>Documentation</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>
