// Object: BoneSelectorEntityData
// ClassId: 2438
// RuntimeId: 50392
// TypeInfo: 0x0000000144D3F550
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BoneSelectorEntityData : public Entity::EntityData {
        Core::LinearTransform Transform; // 0x20
    }; // 0x60
    static_assert(sizeof(BoneSelectorEntityData) == 0x60);
}
#pragma pack(pop)