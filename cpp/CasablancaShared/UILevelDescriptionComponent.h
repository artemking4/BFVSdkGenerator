// Object: UILevelDescriptionComponent
// ClassId: 4221
// RuntimeId: 14798
// TypeInfo: 0x0000000144D2A7A0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../CasablancaShared/GameTipAsset.h"
#include "../CasablancaShared/UICreditsAsset.h"
#include "../CasablancaShared/UIMinimapData.h"
#include "../CasablancaShared/UIMapNavigationData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/UIGPSPosition.h"
#include "../CasablancaShared/UILevelLoadData.h"
#include "../CasablancaShared/UILevelStatData.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        CString LoadingMusicPath; // 0x18
        CasablancaShared::GameTipAsset HintAsset; // 0x20
        Array<CasablancaShared::UICreditsAsset> CreditsAssets; // 0x28
        CasablancaShared::UIMinimapData MinimapData; // 0x30
        CasablancaShared::UIMapNavigationData MapNavigationData; // 0x38
        Int32 SortIndex; // 0x50
        char pad_0x54[0x4];
        CasablancaShared::UIGPSPosition GPSPosition; // 0x58
        CasablancaShared::UILevelLoadData LevelLoadData; // 0x70
        CasablancaShared::UILevelStatData LevelCompletedStatData; // 0x78
        CString CurrentLevelTimeStatData; // 0x98
        CString LastLevelCompletionTimeStatData; // 0xA0
        CString BestLevelCompletionTimeStatData; // 0xA8
        CString CurrentLevelKillsStatData; // 0xB0
        CString LastLevelKillsStatData; // 0xB8
        CString BestLevelKillsStatData; // 0xC0
        CString CurrentLevelAccuracyStatData; // 0xC8
        CString LastLevelAccuracyStatData; // 0xD0
        CString BestLevelAccuracyStatData; // 0xD8
        Array<CString> ChallengeAwardCodes; // 0xE0
        Array<CString> CodexAwardCodes; // 0xE8
        Array<Uint32> LevelConsumableUnlocksIds; // 0xF0
        Float32 SectorDecalTerrainFadeDistance; // 0xF8
        Boolean IsMenuLevel; // 0xFC
        Boolean IsPlaygroundLevel; // 0xFD
        Boolean IsStartupLevel; // 0xFE
        Boolean LoadingMusicAutomaticStop; // 0xFF
    }; // 0x100
    static_assert(sizeof(UILevelDescriptionComponent) == 0x100);
}
#pragma pack(pop)