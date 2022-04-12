function handleClick(node)
{
     const any = 'class'

     var value = node.getAttribute(any) || '';

     value = value === '' ? 'clicked' : '';

     node.setAttribute(any, value);
}