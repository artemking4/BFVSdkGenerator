// Object: AudioSettings
// ClassId: 1182
// RuntimeId: 39525
// TypeInfo: 0x0000000144E161C0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioSettings : public Core::DataContainer {
        Uint32 DataManagerCacheSize; // 0x18
        Uint32 DataManagerCacheRsxSize; // 0x1C
        Uint32 DataManagerMaxReadIssueCount; // 0x20
        Uint32 DataManagerMaxReadActiveCount; // 0x24
        Uint32 DataManagerMaxTrimSize; // 0x28
        Float32 AudioCoreCpuLoadLimit; // 0x2C
        Float32 AudioCoreCpuLoadRecovery; // 0x30
        Int32 AudioCoreThread; // 0x34
        Int32 AudioCoreThreadPriority; // 0x38
        Int32 AudioCoreMixJobThreadCount; // 0x3C
        Int32 AudioCoreMaxMixJobThreadCount; // 0x40
        Int32 AudioCoreMinProcStageVoicesToGoWide; // 0x44
        Uint32 AudioCoreApuHeapSizeCached; // 0x48
        Uint32 AudioCoreApuHeapSizeNonCached; // 0x4C
        Float32 AudioCoreMiniumMixAhead; // 0x50
        Float32 AudioCoreTargetMixAhead; // 0x54
        Uint32 AudioCoreMaxChannelCount; // 0x58
        Uint32 DelayLineAllocSize; // 0x5C
        Uint32 ReverbAllocSize; // 0x60
        Float32 HdrSuspensionThreshold; // 0x64
        Float32 HdrZombieThreshold; // 0x68
        Float32 HdrEnableSuspensionThreshold; // 0x6C
        Float32 SoundSpeed; // 0x70
        Float32 SoundDopplerFactor; // 0x74
        Float32 SoundPitchSmoothFactor; // 0x78
        Float32 PanDistanceClampValue; // 0x7C
        Float32 MusicRequestBufferTime; // 0x80
        Uint32 DacDelay; // 0x84
        Float32 DacAmplitude; // 0x88
        Uint32 MaxExpectedWaveAssetCount; // 0x8C
        Boolean Enable; // 0x90
        Boolean DataManagerAllowChunkLoadsWhileLoadScreenActive; // 0x91
        Boolean DataManagerAllowChunkLoadsWhileLoadingBundles; // 0x92
        Boolean AudioCoreMultipleMixJobsEnabled; // 0x93
        Boolean PanDistanceClamp; // 0x94
        Boolean FrameInterpolationAudioUpdate; // 0x95
        char pad_0x96[0x2];
    }; // 0x98
    static_assert(sizeof(AudioSettings) == 0x98);
}
#pragma pack(pop)