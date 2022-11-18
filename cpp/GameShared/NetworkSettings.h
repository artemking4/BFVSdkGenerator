// Object: NetworkSettings
// ClassId: 4352
// RuntimeId: 12985
// TypeInfo: 0x0000000144E75F40
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class NetworkSettings : public Core::DataContainer {
        Uint32 ProtocolVersion; // 0x18
        char pad_0x1C[0x4];
        CString TitleId; // 0x20
        Uint32 ClientPort; // 0x28
        Uint32 ServerPort; // 0x2C
        Uint32 MaxGhostCount; // 0x30
        Uint32 GhostReserveAfterDeleteCount; // 0x34
        Uint32 MaxClientToServerGhostCount; // 0x38
        Uint32 ClientToServerGhostReserveAfterDeleteCount; // 0x3C
        Uint32 MaxClientCount; // 0x40
        Uint32 MaxClientFrameSize; // 0x44
        Uint32 MaxServerFrameSize; // 0x48
        Uint32 MaxNumVoipPeers; // 0x4C
        CString XlspAddress; // 0x50
        CString ServerAddress; // 0x58
        CString ClientConnectionDebugFilePrefix; // 0x60
        CString ServerConnectionDebugFilePrefix; // 0x68
        Float32 SinglePlayerTimeNudgeGhostFrequencyFactor; // 0x70
        Float32 SinglePlayerTimeNudgeBias; // 0x74
        Float32 SinglePlayerTimeNudge; // 0x78
        Float32 MemorySocketTimeNudgeGhostFrequencyFactor; // 0x7C
        Float32 MemorySocketTimeNudgeBias; // 0x80
        Float32 MemorySocketTimeNudge; // 0x84
        Float32 LocalHostTimeNudgeGhostFrequencyFactor; // 0x88
        Float32 LocalHostTimeNudgeBias; // 0x8C
        Float32 LocalHostTimeNudge; // 0x90
        Float32 DefaultTimeNudgeGhostFrequencyFactor; // 0x94
        Float32 DefaultTimeNudgeBias; // 0x98
        Float32 DefaultTimeNudge; // 0x9C
        Float32 ConnectTimeout; // 0xA0
        Float32 PacketLossLogInterval; // 0xA4
        Uint32 MaxLocalPlayerCount; // 0xA8
        Float32 DefaultHighFrequency; // 0xAC
        Uint32 TunnelSocketBuffSizeKb; // 0xB0
        Int32 MaxLatencyForDamageResendMs; // 0xB4
        Boolean SinglePlayerAutomaticTimeNudge; // 0xB8
        Boolean MemorySocketAutomaticTimeNudge; // 0xB9
        Boolean LocalHostAutomaticTimeNudge; // 0xBA
        Boolean DefaultAutomaticTimeNudge; // 0xBB
        Boolean IncrementServerPortOnFail; // 0xBC
        Boolean UseFrameManager; // 0xBD
        Boolean TimeSyncEnabled; // 0xBE
        Boolean UseKeepConnectionAliveThread; // 0xBF
    }; // 0xC0
    static_assert(sizeof(NetworkSettings) == 0xC0);
}
#pragma pack(pop)