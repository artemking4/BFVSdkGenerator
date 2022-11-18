// Object: ReadAntGameStateEntityData
// ClassId: 3102
// RuntimeId: 53692
// TypeInfo: 0x0000000144E841C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/ReadAntGameStateData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ReadAntGameStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<GameShared::ReadAntGameStateData> AntGameStates; // 0x28
        Int32 NumProperties; // 0x30
        Int32 NumAntAssets; // 0x34
        Boolean StartReadingContinouslyOnSpawn; // 0x38
        Boolean ReadOnceOnSpawn; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(ReadAntGameStateEntityData) == 0x40);
}
#pragma pack(pop)