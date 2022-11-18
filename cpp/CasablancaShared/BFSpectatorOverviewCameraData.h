// Object: BFSpectatorOverviewCameraData
// ClassId: 1679
// RuntimeId: 32125
// TypeInfo: 0x0000000144D358B0
#include "../GameShared/CameraData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSpectatorOverviewCameraData : public GameShared::CameraData {
        Float32 MinHeightOverTerrain; // 0x80
        Float32 MinHeightOverObjects; // 0x84
        Float32 AutoFollowSoldierZoomHeight; // 0x88
        Float32 AutoFollowVehicleZoomHeight; // 0x8C
        Float32 AutoFollow3DPointZoomHeight; // 0x90
        Float32 AutoFollowVelocityDampening; // 0x94
        Float32 AutoFollowSoldierAimOffsetDistance; // 0x98
        Float32 AutoFollowLandVehicleAimOffsetDistance; // 0x9C
        Float32 AutoFollowStationaryVehicleAimOffsetDistance; // 0xA0
        Float32 AutoFollowAirVehicleAimOffsetDistance; // 0xA4
        Float32 AutoFollowBoundsFovScale; // 0xA8
        char pad_0xAC[0x4];
    }; // 0xB0
    static_assert(sizeof(BFSpectatorOverviewCameraData) == 0xB0);
}
#pragma pack(pop)