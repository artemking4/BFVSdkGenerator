// Object: CasablancaSpartaHostCoopFromTemplateRequest
// ClassId: 4785
// RuntimeId: 8539
// TypeInfo: 0x0000000144C72E20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../GameShared/TeamId.h"
#include "../Global/Uint16.h"
#include "../Casablanca/CreateGameTemplateAttributes.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaHostCoopFromTemplateRequest : public SpartaShared::SpartaPayload {
        CString TemplateName; // 0x18
        GameShared::TeamId TeamId; // 0x20
        char pad_0x24[0x4];
        CString DefaultRoleName; // 0x28
        CString ServerId; // 0x30
        Array<Casablanca::CreateGameTemplateAttributes> TemplateAttributes; // 0x38
        Uint16 TeamIndex; // 0x40
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(CasablancaSpartaHostCoopFromTemplateRequest) == 0x48);
}
#pragma pack(pop)