// Object: SimpleStateEntityData
// ClassId: 3216
// RuntimeId: 38216
// TypeInfo: 0x0000000144DF15D0
#include "../DiceShooterShared/SimpleStateEntityBaseData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleStateEntityData : public DiceShooterShared::SimpleStateEntityBaseData {
        Core::Realm Realm; // 0x30
        Boolean InitializeGameState; // 0x34
        Boolean TriggerOnPropertyChanged; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(SimpleStateEntityData) == 0x38);
}
#pragma pack(pop)