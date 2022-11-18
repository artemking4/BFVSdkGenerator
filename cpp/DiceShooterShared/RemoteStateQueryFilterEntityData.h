// Object: RemoteStateQueryFilterEntityData
// ClassId: 3215
// RuntimeId: 56722
// TypeInfo: 0x0000000144DF14D0
#include "../DiceShooterShared/SimpleStateEntityBaseData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RemoteStateQueryFilterEntityData : public DiceShooterShared::SimpleStateEntityBaseData {
        DiceShooterShared::QueryEntityResult EntitiesToFilter; // 0x30
        Core::Realm Realm; // 0x40
        Boolean DelayUpdate; // 0x44
        Boolean AlwaysEnabled; // 0x45
        char pad_0x46[0x2];
    }; // 0x48
    static_assert(sizeof(RemoteStateQueryFilterEntityData) == 0x48);
}
#pragma pack(pop)