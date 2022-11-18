// Object: RimeTextureElementData
// ClassId: 3698
// RuntimeId: 23679
// TypeInfo: 0x0000000144F29FA0
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../RimeShared/RimeTextureResizeMode.h"
#include "../Global/Boolean.h"
#include "../RimeShared/RimeHorizontalContentAlignment.h"
#include "../RimeShared/RimeVerticalContentAlignment.h"
#include "../Core/Vec4.h"
#include "../RenderBase/TextureAddress.h"
#include "../Render/RenderBorderColor.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeTextureElementData : public RimeElementsShared::RimeElementBaseData {
        Core::Vec4 UvRect; // 0x110
        RenderBase::TextureBaseAsset Texture; // 0x120
        RimeShared::RimeTextureResizeMode ResizeMode; // 0x128
        RimeShared::RimeHorizontalContentAlignment HorizontalAlignment; // 0x12C
        RimeShared::RimeVerticalContentAlignment VerticalAlignment; // 0x130
        RenderBase::TextureAddress AddressU; // 0x134
        RenderBase::TextureAddress AddressV; // 0x138
        Render::RenderBorderColor UvBorderColor; // 0x13C
        Boolean FlipHorizontal; // 0x140
        Boolean FlipVertical; // 0x141
        Boolean ClipToBounds; // 0x142
        Boolean SmoothEdges; // 0x143
        char pad_0x144[0xC];
    }; // 0x150
    static_assert(sizeof(RimeTextureElementData) == 0x150);
}
#pragma pack(pop)