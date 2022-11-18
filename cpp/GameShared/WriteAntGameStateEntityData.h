// Object: WriteAntGameStateEntityData
// ClassId: 3925
// RuntimeId: 20637
// TypeInfo: 0x0000000144E84140
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/WriteAntGameStateData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class WriteAntGameStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<GameShared::WriteAntGameStateData> AntGameStates; // 0x28
        Int32 NumProperties; // 0x30
        Int32 NumAntAssets; // 0x34
        Boolean StartWritingContinouslyOnSpawn; // 0x38
        Boolean WriteOnceOnSpawn; // 0x39
        Boolean ForceWriteOnFirstUpdate; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(WriteAntGameStateEntityData) == 0x40);
}
#pragma pack(pop)