// Object: UIDeploy3DSpawnPoint
// ClassId: 5389
// RuntimeId: 5820
// TypeInfo: 0x0000000144D1EC70
#include "../Core/DataContainer.h"
#include "../Global/Uint64.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDeploy3DSpawnPoint : public Core::DataContainer {
        Uint64 SpawnPointId; // 0x18
        Int32 SpawnPointType; // 0x20
        char pad_0x24[0x4];
        CString LocationNameSid; // 0x28
        CString LocationTextSid; // 0x30
        GameShared::TeamId LocationTeamId; // 0x38
        char pad_0x3C[0x4];
        CString VehicleIconSid; // 0x40
        CString VehicleNameSid; // 0x48
        Int32 VehicleMemberCount; // 0x50
        Int32 VehicleMemberCapacity; // 0x54
        CString PlayerIconSid; // 0x58
        CString PlayerName; // 0x60
        Boolean CanSpawn; // 0x68
        Boolean LocationIsCapturePoint; // 0x69
        Boolean LocationIsBase; // 0x6A
        Boolean PlayerIsAlive; // 0x6B
        Boolean PlayerIsSquadLeader; // 0x6C
        Boolean PlayerIsInCombat; // 0x6D
        char pad_0x6E[0x2];
    }; // 0x70
    static_assert(sizeof(UIDeploy3DSpawnPoint) == 0x70);
}
#pragma pack(pop)