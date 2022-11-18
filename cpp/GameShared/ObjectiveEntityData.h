// Object: ObjectiveEntityData
// ClassId: 2917
// RuntimeId: 12273
// TypeInfo: 0x0000000144E77440
#include "../Entity/EntityData.h"
#include "../GameShared/MissionObjectiveHudData.h"
#include "../GameShared/ObjectiveType.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../GameShared/MessageReciever.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/SquadId.h"

#pragma pack(push, 8)
namespace GameShared {
    class ObjectiveEntityData : public Entity::EntityData {
        GameShared::MissionObjectiveHudData HudData; // 0x20
        GameShared::ObjectiveType ObjectiveType; // 0x28
        Float32 DisplayTime; // 0x2C
        Float32 DelayTime; // 0x30
        char pad_0x34[0x4];
        CString ObjectiveSid; // 0x38
        CString ObjectiveBriefSid; // 0x40
        CString SuccessSid; // 0x48
        GameShared::MessageReciever Reciever; // 0x50
        GameShared::TeamId TeamId; // 0x54
        GameShared::SquadId SquadId; // 0x58
        Boolean Tutorial; // 0x5C
        Boolean RetriggerSuccessOnShowObjective; // 0x5D
        Boolean DisplaySuccess; // 0x5E
        char pad_0x5F[0x1];
    }; // 0x60
    static_assert(sizeof(ObjectiveEntityData) == 0x60);
}
#pragma pack(pop)