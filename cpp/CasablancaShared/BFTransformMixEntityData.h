// Object: BFTransformMixEntityData
// ClassId: 2152
// RuntimeId: 53990
// TypeInfo: 0x0000000144D5B7E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFTransformMixEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform In1; // 0x30
        Core::LinearTransform In2; // 0x70
        Float32 Mix; // 0xB0
        char pad_0xB4[0xC];
    }; // 0xC0
    static_assert(sizeof(BFTransformMixEntityData) == 0xC0);
}
#pragma pack(pop)