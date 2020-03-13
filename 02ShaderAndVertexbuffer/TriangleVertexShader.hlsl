#include "Triangle.hlsli"

VertexOut vs(VertexIn i ) : SV_POSITION
{
    VertexOut o;
    o.pos = float4(i.pos, 1.0f);
    o.color = i.color;
	return o;
}