// Object: SoldierSkiingComponentData
// ClassId: 1846
// RuntimeId: 57390
// TypeInfo: 0x0000000144C7E800
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/SoldierSkiingBinding.h"
#include "../GameShared/AimingConstraintsData.h"
#include "../Global/Int32.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SoldierSkiingComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        CasablancaShared::SoldierSkiingBinding Binding; // 0x84
        GameShared::AimingConstraintsData AimingConstraints; // 0xFC
        Int32 AimingConstraintsPriority; // 0x10C
        Core::FloatCurve FallDamageCurve; // 0x110
        char pad_0x118[0x8];
    }; // 0x120
    static_assert(sizeof(SoldierSkiingComponentData) == 0x120);
}
#pragma pack(pop)