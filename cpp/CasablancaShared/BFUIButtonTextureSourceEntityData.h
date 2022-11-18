// Object: BFUIButtonTextureSourceEntityData
// ClassId: 2164
// RuntimeId: 56050
// TypeInfo: 0x0000000144D20BF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UI/UIInputAction.h"
#include "../GameShared/InputConceptIdentifiers.h"
#include "../GameShared/InputDevicePadButtons.h"
#include "../GameShared/InputDeviceAxes.h"
#include "../GameShared/InputDeviceMouseButtons.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIButtonTextureSourceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        UI::UIInputAction InputAction; // 0x24
        GameShared::InputConceptIdentifiers InputConcept; // 0x28
        GameShared::InputDevicePadButtons PadButton; // 0x2C
        GameShared::InputDeviceAxes PadAxis; // 0x30
        GameShared::InputDeviceMouseButtons MouseButton; // 0x34
        GameShared::InputDeviceAxes MouseAxis; // 0x38
        Boolean AllowMouseAndKeyboardTextures; // 0x3C
        Boolean UsePositiveAxis; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(BFUIButtonTextureSourceEntityData) == 0x40);
}
#pragma pack(pop)