// Object: AntSettings
// ClassId: 128
// RuntimeId: 53267
// TypeInfo: 0x0000000144DFB6E0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Ant {
    class AntSettings : public Core::DataContainer {
        Float32 ForceLodDistance; // 0x18
        Int32 MaxAnimatablesPerPoseJob; // 0x1C
        Float32 ReducedInterpolationDistance; // 0x20
        Float32 TrajectoryInterpolationDistance; // 0x24
        Int32 MaxInterpolationSlots; // 0x28
        Int32 MaxSingleBoneInterpolationSlots; // 0x2C
        Float32 CheckGiantSoldiers; // 0x30
        Float32 LeanSignalScale; // 0x34
        Float32 LeanSignalClamp; // 0x38
        Float32 DetailedCollisionSpeedLimit; // 0x3C
        Float32 MaxInterpolationDistance; // 0x40
        Int32 MaxInterpolationTicks; // 0x44
        Int32 AutoCullPixelSize; // 0x48
        Uint32 CodecCacheBlockCount; // 0x4C
        Uint32 CodecCacheBlockSizeInKb; // 0x50
        Uint32 ScratchPadBlockSizeInKb; // 0x54
        Boolean UsePA; // 0x58
        Boolean UseHIK; // 0x59
        Boolean BlockOnJobs; // 0x5A
        Boolean InterpolatePoses; // 0x5B
        Boolean AllowVariableTickLength; // 0x5C
        Boolean UseWeaponFov; // 0x5D
        Boolean ForcePoseUpdate; // 0x5E
        Boolean UseCameraFov; // 0x5F
        Boolean EnablePA; // 0x60
        Boolean ClientEmulatesServer; // 0x61
        Boolean UpdateEnable; // 0x62
        Boolean EnablePackageCache; // 0x63
        Boolean EnableDebugLogFile; // 0x64
        Boolean EnablePoseJobs; // 0x65
        Boolean DisableAILodFeature; // 0x66
        Boolean EnableJobs; // 0x67
        Boolean RunAsHighPriority; // 0x68
        Boolean UpdateLoddingEnable; // 0x69
        Boolean EnableFrostbiteAntPhysicsWorld; // 0x6A
        char pad_0x6B[0x5];
    }; // 0x70
    static_assert(sizeof(AntSettings) == 0x70);
}
#pragma pack(pop)