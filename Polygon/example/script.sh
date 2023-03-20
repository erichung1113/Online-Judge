<#assign maxN = 1000/>
<#list 1..20 as testNumber>
    generator ${maxN+testNumber} > $
</#list>
<#assign maxN = 100000/>
<#list 1 .. 20 as testNumber>
    generator ${maxN+testNumber} > $
</#list>
