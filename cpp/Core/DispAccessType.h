// Object: DispAccessType
// RuntimeId: 37391
// TypeInfo: 0x0000000144BE3660

namespace Core {
    enum DispAccessType {
        DispAccessType_DispatcherFetch = 0,
        DispAccessType_DispatcherCreate = 1,
        DispAccessType_DispatcherRemove = 2,
        DispAccessType_DispatcherReserveIfNotExist = 3,
        DispAccessType_DispatcherFetchTotalUniqueHash = 4,
        DispAccessType_Destroy = 5,
        DispAccessType_Iterate = 6,
        DispAccessType_Add = 7,
        DispAccessType_Remove = 8,
        DispAccessType_RemoveElementAt = 9,
        DispAccessType_Index = 10,
        DispAccessType_Update = 11,
        DispAccessType_UpdateElem = 12,
        DispAccessType_FindElem = 13,
        DispAccessType_Size = 14,
        DispAccessType_GetEntries = 15,
        DispAccessType_Clear = 16,
        DispAccessType_UnregisterKey64 = 17,
        DispAccessType_GetKey64 = 18
    };
}