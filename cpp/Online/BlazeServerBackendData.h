// Object: BlazeServerBackendData
// ClassId: 721
// RuntimeId: 11167
// TypeInfo: 0x0000000144F03510
#include "../Online/ServerBackendData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Online {
    class BlazeServerBackendData : public Online::ServerBackendData {
        CString CreateGameTemplateName; // 0x20
    }; // 0x28
    static_assert(sizeof(BlazeServerBackendData) == 0x28);
}
#pragma pack(pop)