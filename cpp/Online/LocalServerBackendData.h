// Object: LocalServerBackendData
// ClassId: 725
// RuntimeId: 10203
// TypeInfo: 0x0000000144F03610
#include "../Online/ServerBackendData.h"

#pragma pack(push, 8)
namespace Online {
    class LocalServerBackendData : public Online::ServerBackendData {
    }; // 0x20
    static_assert(sizeof(LocalServerBackendData) == 0x20);
}
#pragma pack(pop)