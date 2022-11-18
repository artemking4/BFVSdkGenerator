// Object: CoordinateModificationData
// ClassId: 1434
// RuntimeId: 53383
// TypeInfo: 0x0000000144DBAE00
#include "../Core/DataContainer.h"
#include "../Entity/ModifierAxis.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CoordinateModificationData : public Core::DataContainer {
        Entity::ModifierAxis Left; // 0x18
        Entity::ModifierAxis Up; // 0x1C
        Entity::ModifierAxis Forward; // 0x20
        Boolean InvertLeft; // 0x24
        Boolean InvertUp; // 0x25
        Boolean InvertForward; // 0x26
        char pad_0x27[0x1];
    }; // 0x28
    static_assert(sizeof(CoordinateModificationData) == 0x28);
}
#pragma pack(pop)