// Object: MultipleActorScenarioEntityData
// ClassId: 3415
// RuntimeId: 44580
// TypeInfo: 0x0000000144E76140
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Realm.h"

#pragma pack(push, 16)
namespace GameShared {
    class MultipleActorScenarioEntityData : public Entity::SpatialEntityData {
        Core::LinearTransform WorldSpaceConnectTransform; // 0x60
        Ant::AntRef ScenarioAntRef; // 0xA0
        Int32 LevelChoice; // 0xB4
        Int32 ScenarioChoice; // 0xB8
        Int32 Actor1; // 0xBC
        Int32 Actor1Part; // 0xC0
        Int32 Actor1SecondPart; // 0xC4
        Int32 Actor2; // 0xC8
        Int32 Actor2Part; // 0xCC
        Int32 Actor2SecondPart; // 0xD0
        Int32 Actor3; // 0xD4
        Int32 Actor3Part; // 0xD8
        Int32 Actor3SecondPart; // 0xDC
        Int32 Actor4; // 0xE0
        Int32 Actor4Part; // 0xE4
        Int32 Actor4SecondPart; // 0xE8
        Int32 Actor5; // 0xEC
        Int32 Actor5Part; // 0xF0
        Int32 Actor5SecondPart; // 0xF4
        Int32 Actor6; // 0xF8
        Int32 Actor6Part; // 0xFC
        Int32 Actor6SecondPart; // 0x100
        Float32 ExternalTime; // 0x104
        Core::Realm Realm; // 0x108
        Boolean WorldSpace; // 0x10C
        Boolean AligningEnabled; // 0x10D
        Boolean UseInputEventPlayerAsPlayer1; // 0x10E
        Boolean ScenarioActive; // 0x10F
        Boolean Actor1Prepared; // 0x110
        Boolean Actor2Prepared; // 0x111
        Boolean Actor3Prepared; // 0x112
        Boolean Actor4Prepared; // 0x113
        Boolean Actor5Prepared; // 0x114
        Boolean Actor6Prepared; // 0x115
        Boolean CheckActor1Finished; // 0x116
        Boolean CheckActor2Finished; // 0x117
        Boolean CheckActor3Finished; // 0x118
        Boolean CheckActor4Finished; // 0x119
        Boolean CheckActor5Finished; // 0x11A
        Boolean CheckActor6Finished; // 0x11B
        Boolean UseExternalTime; // 0x11C
        char pad_0x11D[0x3];
    }; // 0x120
    static_assert(sizeof(MultipleActorScenarioEntityData) == 0x120);
}
#pragma pack(pop)