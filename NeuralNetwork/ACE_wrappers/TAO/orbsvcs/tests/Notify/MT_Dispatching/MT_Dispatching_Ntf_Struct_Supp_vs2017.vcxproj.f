<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-5D61-E8C7FC00C5F3}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-5D61-E8C7FC00C5F3}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-5D61-E8C7FC00C5F3}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Test Files">
      <UniqueIdentifier>{4190FD01-FECA-1BAD-5D61-E8C7FC00C5F3}</UniqueIdentifier>
    </Filter>
    <Filter Include="Svc Conf Files">
      <UniqueIdentifier>{84D0937A-FECA-1BAD-5D61-E8C7FC00C5F3}</UniqueIdentifier>
      <Extensions>conf;confxml</Extensions>
    </Filter>
    <Filter Include="Documentation">
      <UniqueIdentifier>{B14BBA74-FECA-1BAD-5D61-E8C7FC00C5F3}</UniqueIdentifier>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="goC.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="goS.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="Structured_Supplier.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="Notify_Structured_Push_Consumer.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="MT_Dispatching.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="run_test.pl">
      <Filter>Test Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="notify_mtdispatching.conf">
      <Filter>Svc Conf Files</Filter>
    </None>
    <None Include="notify_mtdispatching.conf.xml">
      <Filter>Svc Conf Files</Filter>
    </None>
    <None Include="notify_mtsource.conf">
      <Filter>Svc Conf Files</Filter>
    </None>
    <None Include="notify_mtsource.conf.xml">
      <Filter>Svc Conf Files</Filter>
    </None>
    <None Include="notify_nothreads.conf">
      <Filter>Svc Conf Files</Filter>
    </None>
    <None Include="notify_nothreads.conf.xml">
      <Filter>Svc Conf Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <CustomBuild Include="README">
      <Filter>Documentation</Filter>
    </CustomBuild>
  </ItemGroup>
</Project>
