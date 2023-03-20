<#assign maxN = 200000/>
<#assign maxM = 200000/>
<#assign maxR = 200000/>
<#assign maxX = 200000/>
<#assign maxK = 200000/>

<#list 1 .. 30 as testNumber>
    generator ${maxN} 1 ${maxX} ${maxR} ${maxK} ${testNumber} > $
</#list>
<#list 1 .. 30 as testNumber>
    generator ${maxN} ${maxM} ${maxX} 50 ${maxK} ${testNumber} > $
</#list>
<#list 1 .. 50 as testNumber>
    generator ${maxN} ${maxM} ${maxX} ${maxR} ${maxK} ${testNumber} > $
</#list>
