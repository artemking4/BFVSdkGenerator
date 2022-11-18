// Object: BFSpartaSettingsUserGeneratedContentPrivilegesUpdate
// ClassId: 4737
// RuntimeId: 5905
// TypeInfo: 0x0000000144C6EFA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSettingsUserGeneratedContentPrivilegesUpdate : public SpartaShared::SpartaPayload {
        Boolean Allowed; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(BFSpartaSettingsUserGeneratedContentPrivilegesUpdate) == 0x20);
}
#pragma pack(pop)