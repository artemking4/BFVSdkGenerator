// Object: SoldierLeaningComponentData
// ClassId: 1842
// RuntimeId: 29509
// TypeInfo: 0x0000000144D2A9A0
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/SoldierLeaningBinding.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SoldierLeaningComponentData : public Entity::GameComponentData {
        Float32 Sideways; // 0x80
        CasablancaShared::SoldierLeaningBinding Binding; // 0x84
        Boolean Over; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(SoldierLeaningComponentData) == 0xA0);
}
#pragma pack(pop)