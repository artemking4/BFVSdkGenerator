// Object: UIOnlineEntityData
// ClassId: 3747
// RuntimeId: 23518
// TypeInfo: 0x0000000144D214F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UIOnlineEntity1ButtonPopup.h"
#include "../CasablancaShared/UIOnlineEntity2ButtonPopup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOnlineEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupNotSignedInToLive; // 0x28
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupNotSignedInToPSN; // 0x40
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupNotSignedInToOrigin; // 0x58
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupNewUpdateExists; // 0x70
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupAuthCodeFailed; // 0x88
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupConnectionFailed; // 0xA0
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupDuplicateLogin; // 0xB8
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupInvalidUser; // 0xD0
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupLoginCancelled; // 0xE8
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupMissingOnlineAccess; // 0x100
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupNeedUserInteraction; // 0x118
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupNetworkDisconnect; // 0x130
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupNetworkError; // 0x148
        CasablancaShared::UIOnlineEntity2ButtonPopup PopupNoMultiplayerPrivilege; // 0x160
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupOriginStartupFailed; // 0x180
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupServerConfiguration; // 0x198
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupServerDisconnect; // 0x1B0
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupTimeout; // 0x1C8
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupTooYoung; // 0x1E0
        CasablancaShared::UIOnlineEntity1ButtonPopup PopupUserChanged; // 0x1F8
    }; // 0x210
    static_assert(sizeof(UIOnlineEntityData) == 0x210);
}
#pragma pack(pop)