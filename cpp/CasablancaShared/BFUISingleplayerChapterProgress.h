// Object: BFUISingleplayerChapterProgress
// ClassId: 1243
// RuntimeId: 10103
// TypeInfo: 0x0000000144D43C50
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerChapterProgress : public Core::DataContainer {
        CString ChapterLevelPath; // 0x18
        CString ChapterName; // 0x20
        Int32 ChapterIndex; // 0x28
        Int32 Difficulty; // 0x2C
        CString TexturePath; // 0x30
        Int32 AvailableCodexEntries; // 0x38
        Int32 CompletedCodexEntries; // 0x3C
        Int32 AvailableChallenges; // 0x40
        Int32 CompletedChallenges; // 0x44
        Int32 AvailableCollectibles; // 0x48
        Int32 CompletedCollectibles; // 0x4C
        Int32 LastCompletionTime; // 0x50
        Int32 BestCompletionTime; // 0x54
        Int32 LastKills; // 0x58
        Int32 BestKills; // 0x5C
        Int32 LastAccuracy; // 0x60
        Int32 BestAccuracy; // 0x64
        Boolean Completed; // 0x68
        Boolean HasCheckpoint; // 0x69
        Boolean CompletedEasy; // 0x6A
        Boolean CompletedMedium; // 0x6B
        Boolean CompletedHard; // 0x6C
        Boolean CompletedHardcore; // 0x6D
        char pad_0x6E[0x2];
    }; // 0x70
    static_assert(sizeof(BFUISingleplayerChapterProgress) == 0x70);
}
#pragma pack(pop)