// Object: SFBMPEntityData
// ClassId: 3139
// RuntimeId: 20723
// TypeInfo: 0x0000000144C317F0
#include "../Entity/EntityData.h"
#include "../Entity/UpdatePass.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SFBMPEntityData : public Entity::EntityData {
        Entity::UpdatePass UpdatePass; // 0x20
        char pad_0x24[0x4];
        CString In; // 0x28
        Float32 T; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(SFBMPEntityData) == 0x38);
}
#pragma pack(pop)