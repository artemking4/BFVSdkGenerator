// Object: UIMatchEntityData
// ClassId: 3731
// RuntimeId: 14415
// TypeInfo: 0x0000000144D212F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMatchEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 RoundTimeLimitIn; // 0x24
        Boolean PlayerReady; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(UIMatchEntityData) == 0x30);
}
#pragma pack(pop)