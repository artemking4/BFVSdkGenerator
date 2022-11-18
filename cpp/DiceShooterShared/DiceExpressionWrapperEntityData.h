// Object: DiceExpressionWrapperEntityData
// ClassId: 2623
// RuntimeId: 19595
// TypeInfo: 0x0000000144DF91C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/WrapperPropertyDescriptor.h"
#include "../MotionMachineShared/DiceExpression.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DiceExpressionWrapperEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<DiceShooterShared::WrapperPropertyDescriptor> Input; // 0x28
        Array<DiceShooterShared::WrapperPropertyDescriptor> Output; // 0x30
        MotionMachineShared::DiceExpression Expression; // 0x38
        Boolean ExecuteImmediately; // 0x40
        Boolean ExecuteOnPropertyChanged; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(DiceExpressionWrapperEntityData) == 0x48);
}
#pragma pack(pop)