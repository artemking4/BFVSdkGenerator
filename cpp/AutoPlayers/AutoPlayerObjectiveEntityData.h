// Object: AutoPlayerObjectiveEntityData
// ClassId: 2078
// RuntimeId: 58930
// TypeInfo: 0x0000000144BECCE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Boolean.h"
#include "../AutoPlayers/AutoPlayerMoveMode.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

namespace AutoPlayers {
    class AutoPlayerObjectiveEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 RestrictedAreaSphereCentre; // 0x30
        DiceShooterShared::QueryEntityResult Players; // 0x40
        AutoPlayers::AutoPlayerMoveMode MoveMode; // 0x50
        Int32 MoveModeOverrideInt; // 0x54
        CString DebugName; // 0x58
        Int32 TimeThreshold; // 0x60
        Float32 ClampVerticalNavPosSearchMeters; // 0x64
        Float32 RestrictedAreaSphereRadius; // 0x68
        Boolean JesusMode; // 0x6C
        Boolean UnlimitedAmmo; // 0x6D
        Boolean AllowTeleport; // 0x6E
        Boolean UseObjectiveTeleport; // 0x6F
        Boolean UseStuckEscapeProcedure; // 0x70
        Boolean UseNavmesh; // 0x71
        Boolean AllowObjectiveMoveOutsideCombatArea; // 0x72
        Boolean AllowSecondaryObjectives; // 0x73
        Boolean DisableZoomWhenAiming; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(AutoPlayerObjectiveEntityData) == 0x80);
}