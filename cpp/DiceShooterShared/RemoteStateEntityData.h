// Object: RemoteStateEntityData
// ClassId: 3214
// RuntimeId: 47372
// TypeInfo: 0x0000000144DF1550
#include "../DiceShooterShared/SimpleStateEntityBaseData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RemoteStateEntityData : public DiceShooterShared::SimpleStateEntityBaseData {
        DiceShooterShared::QueryEntityResult EntitiesToSetStateOn; // 0x30
        DiceShooterShared::QueryEntityResult EntitiesToQueryStateFrom; // 0x40
        Core::Realm Realm; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(RemoteStateEntityData) == 0x58);
}
#pragma pack(pop)