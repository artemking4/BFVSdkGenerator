// Object: ChatSettings
// ClassId: 4972
// RuntimeId: 24894
// TypeInfo: 0x0000000144D03020
#include "../Core/SystemSettings.h"
#include "../CasablancaShared/ChatChannelType.h"
#include "../CasablancaShared/AntiSpamConfig.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ChatSettings : public Core::SystemSettings {
        Array<CasablancaShared::ChatChannelType> Channels; // 0x20
        CasablancaShared::AntiSpamConfig AntiSpam; // 0x28
    }; // 0x58
    static_assert(sizeof(ChatSettings) == 0x58);
}
#pragma pack(pop)