<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{B1F27843-FECA-1BAD-7EA4-8B61A9309D00}</UniqueIdentifier>
      <Extensions>cpp;cxx;cc;c;C</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{06319535-FECA-1BAD-7EA4-8B61A9309D00}</UniqueIdentifier>
      <Extensions>h;hpp;hxx;hh</Extensions>
    </Filter>
    <Filter Include="Build Files">
      <UniqueIdentifier>{A1909F1C-FECA-1BAD-7EA4-8B61A9309D00}</UniqueIdentifier>
      <Extensions>mpc;mpb;mwc</Extensions>
    </Filter>
    <Filter Include="Svc Conf Files">
      <UniqueIdentifier>{84D0937A-FECA-1BAD-7EA4-8B61A9309D00}</UniqueIdentifier>
      <Extensions>conf;confxml</Extensions>
    </Filter>
    <Filter Include="Inline Files">
      <UniqueIdentifier>{763028EF-FECA-1BAD-7EA4-8B61A9309D00}</UniqueIdentifier>
      <Extensions>i;ipp;inl</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="server_test.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="Handle_Broadcast.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_L_CODgram.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_L_Dgram.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_L_FIFO.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_L_Pipe.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_L_SPIPE.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_L_Stream.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_R_Dgram.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_R_Stream.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_Thr_Stream.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Handle_Timeout.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <None Include="Svc_Cfg_IPC_Server.mpc">
      <Filter>Build Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="svc.conf">
      <Filter>Svc Conf Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <None Include="Handle_Broadcast.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_L_CODgram.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_L_Dgram.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_L_FIFO.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_L_Pipe.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_L_SPIPE.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_L_Stream.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_R_Dgram.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_R_Stream.inl">
      <Filter>Inline Files</Filter>
    </None>
    <None Include="Handle_Timeout.inl">
      <Filter>Inline Files</Filter>
    </None>
  </ItemGroup>
</Project>
