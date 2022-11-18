// Object: RemainingCaptureTimeEntityData
// ClassId: 3105
// RuntimeId: 49930
// TypeInfo: 0x0000000144D03220
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RemainingCaptureTimeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId Team; // 0x24
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(RemainingCaptureTimeEntityData) == 0x30);
}
#pragma pack(pop)