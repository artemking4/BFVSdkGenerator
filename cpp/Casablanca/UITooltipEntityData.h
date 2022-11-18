// Object: UITooltipEntityData
// ClassId: 3781
// RuntimeId: 20840
// TypeInfo: 0x0000000144C7F080
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Casablanca/UITooltipDescription.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UITooltipEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 Timer; // 0x24
        Array<Casablanca::UITooltipDescription> Tooltips; // 0x28
    }; // 0x30
    static_assert(sizeof(UITooltipEntityData) == 0x30);
}
#pragma pack(pop)