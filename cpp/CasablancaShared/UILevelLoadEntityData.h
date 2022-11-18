// Object: UILevelLoadEntityData
// ClassId: 3724
// RuntimeId: 17292
// TypeInfo: 0x0000000144D5F960
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/Marker.h"
#include "../CasablancaShared/UILoadingScreenOverlayText.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILevelLoadEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> GameModes; // 0x28
        Array<CString> OverallGameModes; // 0x30
        Float32 VideoCutoffTime; // 0x38
        char pad_0x3C[0x4];
        CString LevelLoadId; // 0x40
        Array<GameShared::Marker> VideoMarkerOffsets; // 0x48
        Array<CasablancaShared::UILoadingScreenOverlayText> OverlayTexts; // 0x50
        Boolean IsDefault; // 0x58
        Boolean FadeToWhite; // 0x59
        Boolean AutoExitWhenDoneLoading; // 0x5A
        char pad_0x5B[0x5];
    }; // 0x60
    static_assert(sizeof(UILevelLoadEntityData) == 0x60);
}
#pragma pack(pop)