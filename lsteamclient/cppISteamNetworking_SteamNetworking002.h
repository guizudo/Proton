#ifdef __cplusplus
extern "C" {
#endif
extern SNetListenSocket_t cppISteamNetworking_SteamNetworking002_CreateListenSocket(void *, int, uint32, uint16, bool);
extern SNetSocket_t cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket(void *, CSteamID, int, int, bool);
extern SNetSocket_t cppISteamNetworking_SteamNetworking002_CreateConnectionSocket(void *, uint32, uint16, int);
extern bool cppISteamNetworking_SteamNetworking002_DestroySocket(void *, SNetSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking002_DestroyListenSocket(void *, SNetListenSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking002_SendDataOnSocket(void *, SNetSocket_t, void *, uint32, bool);
extern bool cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket(void *, SNetSocket_t, uint32 *);
extern bool cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket(void *, SNetSocket_t, void *, uint32, uint32 *);
extern bool cppISteamNetworking_SteamNetworking002_IsDataAvailable(void *, SNetListenSocket_t, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking002_RetrieveData(void *, SNetListenSocket_t, void *, uint32, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking002_GetSocketInfo(void *, SNetSocket_t, CSteamID *, int *, uint32 *, uint16 *);
extern bool cppISteamNetworking_SteamNetworking002_GetListenSocketInfo(void *, SNetListenSocket_t, uint32 *, uint16 *);
extern ESNetSocketConnectionType cppISteamNetworking_SteamNetworking002_GetSocketConnectionType(void *, SNetSocket_t);
extern int cppISteamNetworking_SteamNetworking002_GetMaxPacketSize(void *, SNetSocket_t);
#ifdef __cplusplus
}
#endif
